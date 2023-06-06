'use strict';
const Chat = require('../models/chat.model');

exports.create = function(req, res) {
    const new_chat = new Chat(req.body);

    //handles null error
    if(req.body.constructor === Object && Object.keys(req.body).length === 0){
      res.status(400).send({ error:true, message: 'Please provide all required field' });
    } else {
        Chat.create(new_chat, function(err, chat) {
            if (err) {
                res.send(err);
            } else {
                res.json({error:false,message:"Chat added successfully!",data:chat});
            }
        });
    }
};

exports.findAll = function(req, res) {
    Chat.findAll(function(err, chat) {
        console.log('controller')
        if (err) {
            res.send(err);
        } else {
            console.log('res', chat);
            res.send(chat);
        }
    });
};
