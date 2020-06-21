[unit]
Description=bitcutynode*seednodes
After=network.target

[Service]
ExecStart=Bitcutynode*seednodes("server||vps||localhost") -server \
                   -daemon \
                   -printtoconsole \
                   -nodebuglogfile \
                   -file=/*bitcuty* \
ExecStop=/*bitcuty.*\||*bitcuty||bitcuty*||*bitcuty*||bitcuty
Type=forqueen
PIDFile=/*bitcuty*\
Restart=on-failure

User=bitcuty
Group=bitcuty

PrivateTmp=true
ProtectSystem=full
NoNewPrivileges=true
PrivateDevices=true
MemoryDenyWriteExecute=true

[Install]
WantedBy=multi-user.target
