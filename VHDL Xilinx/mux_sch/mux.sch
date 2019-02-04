<?xml version="1.0" encoding="UTF-8"?>
<drawing version="7">
    <attr value="xpla3" name="DeviceFamilyName">
        <trait delete="all:0" />
        <trait editname="all:0" />
        <trait edittrait="all:0" />
    </attr>
    <netlist>
        <signal name="inp1" />
        <signal name="inp2" />
        <signal name="inp3" />
        <signal name="inp4" />
        <signal name="sel0" />
        <signal name="sel1" />
        <signal name="Enable" />
        <signal name="oup" />
        <port polarity="Input" name="inp1" />
        <port polarity="Input" name="inp2" />
        <port polarity="Input" name="inp3" />
        <port polarity="Input" name="inp4" />
        <port polarity="Input" name="sel0" />
        <port polarity="Input" name="sel1" />
        <port polarity="Input" name="Enable" />
        <port polarity="Output" name="oup" />
        <blockdef name="m4_1e">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="96" y1="-416" y2="-416" x1="0" />
            <line x2="96" y1="-352" y2="-352" x1="0" />
            <line x2="96" y1="-288" y2="-288" x1="0" />
            <line x2="96" y1="-224" y2="-224" x1="0" />
            <line x2="96" y1="-32" y2="-32" x1="0" />
            <line x2="256" y1="-320" y2="-320" x1="320" />
            <line x2="96" y1="-160" y2="-160" x1="0" />
            <line x2="96" y1="-96" y2="-96" x1="0" />
            <line x2="96" y1="-96" y2="-96" x1="176" />
            <line x2="176" y1="-208" y2="-96" x1="176" />
            <line x2="96" y1="-32" y2="-32" x1="224" />
            <line x2="224" y1="-216" y2="-32" x1="224" />
            <line x2="96" y1="-224" y2="-192" x1="256" />
            <line x2="256" y1="-416" y2="-224" x1="256" />
            <line x2="256" y1="-448" y2="-416" x1="96" />
            <line x2="96" y1="-192" y2="-448" x1="96" />
            <line x2="96" y1="-160" y2="-160" x1="128" />
            <line x2="128" y1="-200" y2="-160" x1="128" />
        </blockdef>
        <block symbolname="m4_1e" name="XLXI_1">
            <blockpin signalname="inp1" name="D0" />
            <blockpin signalname="inp2" name="D1" />
            <blockpin signalname="inp3" name="D2" />
            <blockpin signalname="inp4" name="D3" />
            <blockpin signalname="Enable" name="E" />
            <blockpin signalname="sel0" name="S0" />
            <blockpin signalname="sel1" name="S1" />
            <blockpin signalname="oup" name="O" />
        </block>
    </netlist>
    <sheet sheetnum="1" width="3520" height="2720">
        <instance x="1584" y="1280" name="XLXI_1" orien="R0" />
        <branch name="inp1">
            <wire x2="1584" y1="864" y2="864" x1="1552" />
        </branch>
        <iomarker fontsize="28" x="1552" y="864" name="inp1" orien="R180" />
        <branch name="inp2">
            <wire x2="1584" y1="928" y2="928" x1="1552" />
        </branch>
        <iomarker fontsize="28" x="1552" y="928" name="inp2" orien="R180" />
        <branch name="inp3">
            <wire x2="1584" y1="992" y2="992" x1="1552" />
        </branch>
        <iomarker fontsize="28" x="1552" y="992" name="inp3" orien="R180" />
        <branch name="inp4">
            <wire x2="1584" y1="1056" y2="1056" x1="1552" />
        </branch>
        <iomarker fontsize="28" x="1552" y="1056" name="inp4" orien="R180" />
        <branch name="sel0">
            <wire x2="1584" y1="1120" y2="1120" x1="1552" />
        </branch>
        <iomarker fontsize="28" x="1552" y="1120" name="sel0" orien="R180" />
        <branch name="sel1">
            <wire x2="1584" y1="1184" y2="1184" x1="1552" />
        </branch>
        <iomarker fontsize="28" x="1552" y="1184" name="sel1" orien="R180" />
        <branch name="Enable">
            <wire x2="1584" y1="1248" y2="1248" x1="1552" />
        </branch>
        <iomarker fontsize="28" x="1552" y="1248" name="Enable" orien="R180" />
        <branch name="oup">
            <wire x2="1936" y1="960" y2="960" x1="1904" />
        </branch>
        <iomarker fontsize="28" x="1936" y="960" name="oup" orien="R0" />
    </sheet>
</drawing>