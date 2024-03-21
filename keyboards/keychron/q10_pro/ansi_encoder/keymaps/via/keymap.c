{
  "name": "Keychron Q10 Pro ANSI knob",
  "vendorId": "0x3434",
  "productId": "0x06A0",
  "keycodes": ["qmk_lighting"],
  "menus": [
    {
      "label": "Lighting",
      "content": [
        {
          "label": "Backlight",
          "content": [
            {
              "label": "Brightness",
              "type": "range",
              "options": [0, 255],
              "content": ["id_qmk_rgb_matrix_brightness", 3, 1]
            },
            {
              "label": "Effect",
              "type": "dropdown",
              "content": ["id_qmk_rgb_matrix_effect", 3, 2],
              "options": [
                ["None", 0],
                ["Solid Color", 1],
                ["Breathing", 2],
                ["Band Spiral Val", 3],
                ["Cycle All", 4],
                ["Cycle Left Right", 5],
                ["Cycle Up Down", 6],
                ["Rainbow Moving Chevron", 7],
                ["Cycle Out In", 8],
                ["Cycle Out In Dual", 9],
                ["Cycle Pinwheel", 10],
                ["Cycle Spiral", 11],
                ["Dual Beacon", 12],
                ["Rainbow Beacon", 13],
                ["Raindrops", 14],
                ["Jellybean Raindrops", 15],
                ["Pixel Rain", 16],
                ["Flower Blooming", 17],
                ["Typing Heatmap", 18],
                ["Digital Rain", 19],
                ["Reactive Simple", 20],
                ["Reactive Multiwide", 21],
                ["Reactive Multinexus", 22],
                ["Splash", 23],
                ["Solid Splash", 24],
                ["Starlight", 25],
                ["Starlight Dual Hue", 26],
                ["Starlight Dual Sat", 27],
                ["Riverflow", 28]
                          ]
            },
            {
              "showIf": "{id_qmk_rgb_matrix_effect} > 1",
              "label": "Effect Speed",
              "type": "range",
              "options": [0, 255],
              "content": ["id_qmk_rgb_matrix_effect_speed", 3, 3]
            },
            {
              "showIf": "{id_qmk_rgb_matrix_effect} > 1",
              "label": "Color",
              "type": "color",
              "content": ["id_qmk_rgb_matrix_color", 3, 4]
            }
          ]
        }
      ]
    }
  ],
  "customKeycodes": [
    {"name": "Misson Control", "title": "Misson Control, availabe in macOS", "shortName": "MCtrl"},
    {"name": "Launch pad", "title": "Launch pad, availabe in macOS", "shortName": "LPad"},
    {"name": "Left Option", "title": "Left Option", "shortName": "LOpt"},
    {"name": "Right Option", "title": "Right Option", "shortName": "ROpt"},
    {"name": "Left Cmd", "title": "Left Command", "shortName": "LCmd"},
    {"name": "Right Cmd", "title": "Right Command", "shortName": "RCmd"},
    {"name": "Task View", "title": "Task View in Windows", "shortName": "Task"},
    {"name": "File Explorer", "title": "File Explorer in Windows", "shortName": "File"},
    {"name": "Screen shot", "title": "Screenshot in macOS", "shortName": "SShot"},
    {"name": "Cortana", "title": "Cortana in Windows", "shortName": "Cortana"},
    {"name": "Siri", "title": "Siri in macOS", "shortName": "Siri"},
    {"name": "Bluetooth Host 1", "title": "Bluetooth Host 1", "shortName": "BTH1"},
    {"name": "Bluetooth Host 2", "title": "Bluetooth Host 2", "shortName": "BTH2"},
    {"name": "Bluetooth Host 3", "title": "Bluetooth Host 3", "shortName": "BTH3"},
    {"name": "Battery Level", "title": "Show battery level", "shortName": "Batt"}
  ],
  "matrix": {"rows": 6, "cols": 16},
  "layouts": {
    "keymap": [
      [
        {
          "x": 0.5
        },
        "0,0\n\n\n\n\n\n\n\n\ne0",
        {
          "x": 0.5,
          "c": "#777777"
        },
        "0,1\nESC",
        {
          "x": 0.25,
          "c": "#cccccc"
        },
        "0,2",
        "0,3",
        {
          "x": 9.35
        },
        "0,12",
        "0,13",
        {
          "x": 0.45,
          "c": "#aaaaaa"
        },
        "0,14",
        {
          "x": 0.45
        },
        "0,15"
      ],
      [
        {
          "y": 0.25,
          "x": 0.75
        },
        "1,0",
        {
          "x": 0.5
        },
        "1,1",
        {
          "c": "#cccccc"
        },
        "1,2",
        "1,3",
        {
          "x": 8.65
        },
        "1,12",
        "1,13",
        {
          "c": "#aaaaaa",
          "w": 2
        },
        "1,14",
        {
          "x": 0.6
        },
        "1,15"
      ],
      [
        {
          "x": 0.5
        },
        "2,0",
        {
          "x": 0.5,
          "w": 1.5
        },
        "2,1",
        {
          "c": "#cccccc"
        },
        "2,2",
        {
          "x": 9.9
        },
        "2,12",
        "2,13",
        {
          "c": "#aaaaaa",
          "w": 1.75
        },
        "2,14",
        {
          "x": 0.5
        },
        "2,15"
      ],
      [
        {
          "x": 0.25
        },
        "3,0",
        {
          "x": 0.5,
          "w": 1.75
        },
        "3,1",
        {
          "c": "#cccccc"
        },
        "3,2",
        {
          "x": 9.5
        },
        "3,12",
        "3,13",
        {
          "c": "#777777",
          "w": 2.25
        },
        "3,14",
        {
          "x": 0.5,
          "c": "#aaaaaa"
        },
        "3,15"
      ],
      [
        "4,0",
        {
          "x": 0.5,
          "w": 2.25
        },
        "4,1",
        {
          "c": "#cccccc"
        },
        "4,3",
        {
          "x": 9.75
        },
        "4,13",
        {
          "c": "#aaaaaa",
          "w": 1.75
        },
        "4,14"
      ],
      [
        {
          "y": -0.75,
          "x": 17.5,
          "c": "#777777"
        },
        "4,15"
      ],
      [
        {
          "y": -0.25,
          "c": "#aaaaaa"
        },
        "5,0",
        {
          "x": 0.5,
          "w": 1.25
        },
        "5,1",
        {
          "w": 1.25
        },
        "5,2"
      ],
      [
        {
          "y": -0.75,
          "x": 16.5,
          "c": "#777777"
        },
        "5,13",
        "5,14",
        "5,15"
      ],
      [
        {
          "r": 6,
          "y": -7.05,
          "x": 5.4,
          "c": "#cccccc"
        },
        "0,4",
        "0,5",
        {
          "x": 0.25,
          "c": "#aaaaaa"
        },
        "0,6",
        "0,7"
      ],
      [
        {
          "y": 0.25,
          "x": 5.55,
          "c": "#cccccc"
        },
        "1,4",
        "1,5",
        "1,6",
        "1,7"
      ],
      [
        {
          "x": 4.9
        },
        "2,3",
        "2,4",
        "2,5",
        "2,6"
      ],
      [
        {
          "x": 5
        },
        "3,3",
        "3,4",
        "3,5",
        "3,6"
      ],
      [
        {
          "x": 5.35
        },
        "4,4",
        "4,5",
        "4,6",
        "4,7"
      ],
      [
        {
          "x": 5.35,
          "c": "#aaaaaa",
          "w": 1.25
        },
        "5,3",
        {
          "w": 2.25
        },
        "5,4",
        "5,7"
      ],
      [
        {
          "r": -6,
          "y": -4.25,
          "x": 10.05
        },
        "0,8",
        "0,9",
        {
          "x": 0.25,
          "c": "#cccccc"
        },
        "0,10",
        "0,11"
      ],
      [
        {
          "y": 0.25,
          "x": 9.4
        },
        "1,8",
        "1,9",
        "1,10",
        "1,11"
      ],
      [
        {
          "x": 8.9
        },
        "2,7",
        "2,8",
        "2,9",
        "2,10",
        "2,11"
      ],
      [
        {
          "x": 9.4
        },
        "3,8",
        "3,9",
        "3,10",
        "3,11"
      ],
      [
        {
          "x": 8.85
        },
        "4,8",
        "4,9",
        "4,10",
        "4,11",
        "4,12"
      ],
      [
        {
          "x": 8.85,
          "c": "#aaaaaa",
          "w": 2.55
        },
        "5,8",
        "5,9",
        "5,10"
      ]
    ]
  }
}
