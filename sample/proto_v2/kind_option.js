// this file is generated by xresloader, please don't edit it.

exports.files = [
  {
    enum_type : {
      cost_type : {
        name : "cost_type",
        value : {
          EN_CT_DIAMOND : {
            name : "EN_CT_DIAMOND",
            number : 10101,
            options : {
              enum_alias : [
                "钻石"
              ]
            }
          },
          EN_CT_MONEY : {
            name : "EN_CT_MONEY",
            number : 10001,
            options : {
              enum_alias : [
                "金币"
              ]
            }
          }
        }
      },
      game_const_config : {
        name : "game_const_config",
        options : {
          allow_alias : true
        }
      }
    },
    name : "dependency.proto",
    package : "",
    path : "dependency.proto"
  },
  {
    message_type : {
      arr_in_arr : {
        field : {
          int_arr : {
            name : "int_arr",
            number : 2,
            options : {
              field_list_max_size : "3",
              field_list_min_size : "game_const_config.EN_GCC_UNKNOWN",
              field_list_strip_option : {
                name : "LIST_STRIP_NOTHING",
                number : 1
              },
              packed : true
            },
            type_name : "INT32"
          },
          name : {
            name : "name",
            number : 1,
            options : {
              field_description : "This is a test name in array"
            },
            type_name : "STRING"
          }
        },
        name : "arr_in_arr",
        options : {
          helper : "helper",
          not_data_table : true
        }
      },
      arr_in_arr_cfg : {
        enum_type : {
          TestMapIsEntry : {
            name : "TestMapIsEntry",
            options : {
              map_entry : true
            }
          },
          TestMapSmEntry : {
            name : "TestMapSmEntry",
            options : {
              map_entry : true
            }
          }
        },
        field : {
          id : {
            name : "id",
            number : 1,
            options : {
              field_description : "This is a Key",
              key_tag : 1
            },
            type_name : "UINT32"
          },
          test_map_sm : {
            name : "test_map_sm",
            number : 8,
            options : {
              field_separator : "|"
            },
            type_name : "MESSAGE"
          },
          test_plain_int_arr : {
            name : "test_plain_int_arr",
            number : 3,
            options : {
              field_list_max_size : "3",
              field_list_min_size : "1"
            },
            type_name : "INT32"
          },
          test_plain_msg : {
            name : "test_plain_msg",
            number : 5,
            options : {
              field_separator : "&"
            },
            type_name : "MESSAGE"
          }
        },
        name : "arr_in_arr_cfg",
        options : {
          helper : "helper",
          msg_description : "Test arr_in_arr_cfg"
        }
      },
      combine_id : {
        field : {
          id : {
            name : "id",
            number : 2,
            options : {
              validator : "0-99999"
            },
            type_name : "UINT32"
          }
        },
        name : "combine_id"
      },
      event_cfg : {
        field : {
          enum_type : {
            name : "enum_type",
            number : 14,
            options : {
              field_alias : [
                "货币类型"
              ]
            },
            type_name : "ENUM"
          },
          id : {
            name : "id",
            number : 1,
            options : {
              field_not_null : true,
              field_unique_tag : [
                "unique_tag"
              ],
              key_tag : 100,
              validator : "custom_rule4"
            },
            type_name : "UINT32"
          },
          item : {
            name : "item",
            number : 11,
            options : {
              field_alias : [
                "奖励道具"
              ]
            },
            type_name : "MESSAGE"
          },
          note : {
            name : "note",
            number : 13,
            options : {
              field_alias : [
                "描述文本"
              ]
            },
            type_name : "STRING"
          },
          process : {
            name : "process",
            number : 2,
            options : {
              field_not_null : true,
              field_unique_tag : [
                "unique_tag"
              ],
              key_tag : 1
            },
            type_name : "UINT32"
          },
          test_arr : {
            name : "test_arr",
            number : 91,
            options : {
              field_separator : ";"
            },
            type_name : "MESSAGE"
          },
          test_empty_arr : {
            name : "test_empty_arr",
            number : 92,
            options : {
              field_separator : ";"
            },
            type_name : "MESSAGE"
          },
          user_exp : {
            name : "user_exp",
            number : 12,
            options : {
              field_alias : [
                "奖励经验"
              ]
            },
            type_name : "INT64"
          },
          user_level : {
            name : "user_level",
            number : 51,
            options : {
              field_alias : [
                "玩家等级"
              ]
            },
            type_name : "UINT32"
          }
        },
        name : "event_cfg",
        oneof_decl : {
          reward : {
            name : "reward",
            options : {
              oneof_not_null : true
            }
          }
        },
        options : {
          helper : "helper",
          msg_description : "Test event_cfg with oneof fields"
        }
      },
      event_reward_item : {
        field : {
          nested_enum_type : {
            name : "nested_enum_type",
            number : 12,
            options : {
              field_alias : [
                "货币类型"
              ]
            },
            type_name : "ENUM"
          },
          nested_note : {
            name : "nested_note",
            number : 11,
            options : {
              field_alias : [
                "描述文本"
              ]
            },
            type_name : "STRING"
          }
        },
        name : "event_reward_item"
      },
      event_rule_item : {
        field : {
          nested_enum_type : {
            name : "nested_enum_type",
            number : 12,
            options : {
              field_alias : [
                "货币类型"
              ]
            },
            type_name : "ENUM"
          },
          nested_note : {
            name : "nested_note",
            number : 11,
            options : {
              field_alias : [
                "描述文本"
              ]
            },
            type_name : "STRING"
          }
        },
        name : "event_rule_item"
      },
      inner_alias_message : {
        field : {
          iType : {
            name : "iType",
            number : 1,
            options : {
              field_alias : [
                "Type"
              ]
            },
            type_name : "INT32"
          },
          paramList : {
            name : "paramList",
            number : 2,
            options : {
              field_alias : [
                "Param"
              ]
            },
            type_name : "INT64"
          }
        },
        name : "inner_alias_message"
      },
      keep_or_strip_empty_list_cfg : {
        field : {
          id : {
            name : "id",
            number : 1,
            options : {
              field_description : "This is a Key",
              key_tag : 1
            },
            type_name : "UINT32"
          }
        },
        name : "keep_or_strip_empty_list_cfg",
        options : {
          helper : "helper"
        }
      },
      outer_alias_message : {
        field : {
          iId : {
            name : "iId",
            number : 1,
            options : {
              field_alias : [
                "ID"
              ]
            },
            type_name : "INT32"
          },
          inners : {
            name : "inners",
            number : 2,
            options : {
              field_alias : [
                "Condition"
              ]
            },
            type_name : "MESSAGE"
          }
        },
        name : "outer_alias_message"
      },
      process_by_script : {
        enum_type : {
          MapU32StringEntry : {
            name : "MapU32StringEntry",
            options : {
              map_entry : true
            }
          },
          TestMapIsEntry : {
            name : "TestMapIsEntry",
            options : {
              map_entry : true
            }
          },
          TestMapSmEntry : {
            name : "TestMapSmEntry",
            options : {
              map_entry : true
            }
          }
        },
        field : {
          test_map_sm : {
            name : "test_map_sm",
            number : 8,
            options : {
              field_separator : "|"
            },
            type_name : "MESSAGE"
          }
        },
        name : "process_by_script"
      },
      role_cfg : {
        field : {
          convert_duration_arr : {
            name : "convert_duration_arr",
            number : 27,
            options : {
              field_origin_value : "origin_duration_arr"
            },
            type_name : "MESSAGE"
          },
          convert_duration_one : {
            name : "convert_duration_one",
            number : 23,
            options : {
              field_origin_value : "origin_duration_one"
            },
            type_name : "MESSAGE"
          },
          convert_timepoint_arr : {
            name : "convert_timepoint_arr",
            number : 25,
            options : {
              field_origin_value : "origin_timepoint_arr"
            },
            type_name : "MESSAGE"
          },
          convert_timepoint_one : {
            name : "convert_timepoint_one",
            number : 21,
            options : {
              field_origin_value : "origin_timepoint_one"
            },
            type_name : "MESSAGE"
          }
        },
        name : "role_cfg"
      },
      role_upgrade_cfg : {
        field : {
          CostType : {
            name : "CostType",
            number : 3,
            options : {
              field_description : "Refer to cost_type",
              validator : "custom_rule1"
            },
            type_name : "INT32"
          },
          Id : {
            name : "Id",
            number : 1,
            options : {
              key_tag : 1000,
              validator : "custom_rule3"
            },
            type_name : "UINT32"
          },
          Level : {
            name : "Level",
            number : 2,
            options : {
              key_tag : 1
            },
            type_name : "UINT32"
          }
        },
        name : "role_upgrade_cfg",
        options : {
          helper : "helper",
          msg_description : "Test role_upgrade_cfg with multi keys"
        }
      },
      test_msg_verifier : {
        field : {
          test_id_2 : {
            name : "test_id_2",
            number : 10002,
            options : {
              field_alias : [
                "测试ID别名2"
              ]
            },
            type_name : "UINT32"
          },
          test_id_3 : {
            name : "test_id_3",
            number : 10003,
            options : {
              field_allow_missing_in_plain_mode : true
            },
            type_name : "UINT32"
          }
        },
        name : "test_msg_verifier",
        options : {
          msg_separator : "-^"
        }
      }
    },
    name : "kind.proto",
    package : "",
    path : "kind.proto"
  }
];

