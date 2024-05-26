#include "xmlhandler_discordbot.h"
#include <iostream>

void XMLHandler_discordBot::writeBotConfigure()
{
    // pugixml code to write bot configuration
    /* 
        Generated code:
        config.discord = {
            token: "your_token_here",
            ignore_me: [true, false],
            ignore_bots: [true, false],
            ignore_system: [true, false],
            request_presence_intent: [true, false],
            request_members_intent: [true, false]
        }
    */

    pugi::xml_document doc;
    // <block type="discord_login" id="X">
    pugi::xml_node discord_login = doc.append_child("block");
    discord_login.append_attribute("type") = "discord_login";
    discord_login.append_attribute("id") = "X";
    // <field name="token">your_token_here</field>
    pugi::xml_node token = discord_login.append_child("field");
    token.append_attribute("name") = "token";
    token.text().set("your_token_here");
    // <field name="ignore_me">true</field>
    pugi::xml_node ignore_me = discord_login.append_child("field");
    ignore_me.append_attribute("name") = "ignore_me";
    ignore_me.text().set("true");
    // <field name="ignore_bots">true</field>
    pugi::xml_node ignore_bots = discord_login.append_child("field");
    ignore_bots.append_attribute("name") = "ignore_bots";
    ignore_bots.text().set("true");
    // <field name="ignore_system">true</field>
    pugi::xml_node ignore_system = discord_login.append_child("field");
    ignore_system.append_attribute("name") = "ignore_system";
    ignore_system.text().set("true");
    // <field name="request_presence_intent">true</field>
    pugi::xml_node request_presence_intent = discord_login.append_child("field");
    request_presence_intent.append_attribute("name") = "request_presence_intent";
    request_presence_intent.text().set("true");
    // <field name="request_members_intent">true</field>
    pugi::xml_node request_members_intent = discord_login.append_child("field");
    request_members_intent.append_attribute("name") = "request_members_intent";
    request_members_intent.text().set("true");

    // Save the file, replace if exists, create if not exists
    doc.save_file("Config/bot_discord_config.xml");

    // Print the file to console
    doc.save(std::cout);
}
