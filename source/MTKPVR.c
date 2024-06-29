#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main()
{
    printf("\n");
    printf("------------------------------------\n");
    printf("★    Mediatek PowerVR Optimizer    ★\n");
    printf("------------------------------------\n");
    printf("\n");

    sleep(2);
    
    printf("Clear Temporary Services\n");

    FILE *fp;
    char app[128];

    fp = popen("cmd package list packages | grep -v me.piebridge.brevent | grep -v android | grep -v eu.sisik.hackendebug.full | grep -v com.android.systemui | grep -v com.draco.ladb | grep -v com.termux | grep -v eu.sisik.hackendebug | grep -v moe.shizuku.privileged.api | grep -v com.activision.callofduty.shooter | grep -v com.activision.callofduty.warzone | grep -v com.autumn.skullgirls | grep -v com.bilibiligame.heglgp | grep -v com.carxtech.sr | grep -v com.citra.emu | grep -v com.criticalforceentertainment.criticalops | grep -v com.dolphinemu.dolphinemu | grep -v com.dts.freefiremax | grep -v com.dts.freefireth | grep -v com.ea.gp.apexlegendsmobilefps | grep -v com.ea.gp.fifamobile | grep -v com.epicgames.fortnite | grep -v com.firsttouchgames.dls7 | grep -v com.gabama.monopostolite | grep -v com.gameloft.android.ANMP.GloftMVHM | grep -v com.garena.game.codm | grep -v com.garena.game.kgid | grep -v com.garena.game.kgvn | grep -v com.je.supersus | grep -v com.kakaogames.eversoul | grep -v com.kog.grandchaseglobal | grep -v com.levelinfinite.hotta.gp | grep -v com.linegames.sl | grep -v com.miHoYo.GenshinImpact | grep -v com.miHoYo.bh3global | grep -v com.miHoYo.bh3oversea | grep -v com.miHoYo.bh3oversea_vn | grep -v com.HoYoverse.hkrpgoversea | grep -v com.mobile.legends | grep -v com.netease.frxyna | grep -v com.netease.racerna | grep -v com.nexon.bluearchive | grep -v com.olzhass.carparking.multyplayer | grep -v com.pearlabyss.blackdesertm.gl | grep -v com.proximabeta.mf.uamo | grep -v com.proximabeta.nikke | grep -v com.pubg.imobile | grep -v com.pubg.newstate | grep -v com.rayark.sdorica | grep -v com.riotgames.league.wildrift | grep -v com.smokoko.race | grep -v com.sprduck.garena.vn | grep -v com.stove.epic7.google | grep -v com.supercell.brawlstars | grep -v com.supercell.clashroyale | grep -v com.supercell.clashofclans | grep -v com.tencent.ig | grep -v com.tencent.mf.uam | grep -v com.vng.mlbbvn | grep -v jp.co.craftegg.band | grep -v jp.konami.pesam | grep -v net.wargaming.wot.blitz | grep -v org.mm.jr | grep -v org.vita3k.emulator | grep -v skyline.emu | grep -v com.carxtech.sr | grep -v com.miraclegames.farlight84 | grep -v com.proximabeta.mf.uamo | grep -v jp.konami.pesam | grep -v com.ea.gp.fifamobile | grep -v com.termux | grep -v com.mobilelegends.hwag", "r");

    while (fgets(app, sizeof(app), fp) != NULL)
    {
        app[strcspn(app, "\n")] = 0;

        {
            char command[12397];
            sprintf(command, "am clear-exit-info --user 0 %s > /dev/null 2>&1", app);
            system(command);
            
            char command01[12397];
            sprintf(command01, "am service-restart-backoff disable %s > /dev/null 2>&1", app);
            system(command01);
            
            char command02[12397];
            sprintf(command02, "am set-standby-bucket --user 0 %s never > /dev/null 2>&1", app);
            system(command02);
            
            char command03[12397];
            sprintf(command03, "am set-bg-restriction-level --user 0 %s hibernation > /dev/null 2>&1", app);
            system(command03);
            
            char command04[12397];
            sprintf(command04, "am set-foreground-service-delegate --user 0 %s stop > /dev/null 2>&1", app);
            system(command04);
            
            char command05[12397];
            sprintf(command05, "cmd jobscheduler cancel -u 0 %s > /dev/null 2>&1", app);
            system(command05);
            
            char command06[12397];
            sprintf(command06, "cmd jobscheduler stop -u 0 %s > /dev/null 2>&1", app);
            system(command06);
            
            char command07[12397];
            sprintf(command07, "am kill %s > /dev/null 2>&1", app);
            system(command07);
            
            char command08[12397];
            sprintf(command08, "am force-stop %s > /dev/null 2>&1", app);
            system(command08);
            
            char command09[12397];
            sprintf(command09, "dumpsys deviceidle whitelist -%s > /dev/null 2>&1", app);
            system(command09);
            
            char command10[12397];
            sprintf(command10, "pm log-visibility --disable %s > /dev/null 2>&1", app);
            system(command10);
            
            char command11[12397];
            sprintf(command11, "pm set-silent-updates-policy --throttle-time 0 %s > /dev/null 2>&1", app);
            system(command11);
            
            char command12[12397];
            sprintf(command12, "am clear-ignore-delivery-group-policy %s > /dev/null 2>&1", app);
            system(command12);
            
            char command13[12397];
            sprintf(command13, "am profile stop current %s > /dev/null 2>&1", app);
            system(command13);
            
            char command14[12397];
            sprintf(command14, "am profile stop --user 0 %s > /dev/null 2>&1", app);
            system(command14);
            
            char command15[12397];
            sprintf(command15, "am profile stop --user 0 current %s > /dev/null 2>&1", app);
            system(command15);
            
            char command16[12397];
            sprintf(command16, "dumpsys power whitelist -c %s com.android.server.content.SyncManager > /dev/null 2>&1", app);
            system(command16);
            
            char command17[12397];
            sprintf(command17, "dumpsys power whitelist -c %s com.android.server.power.PowerManagerService > /dev/null 2>&1", app);
            system(command17);
            
            char command19[12397];
            sprintf(command19, "dumpsys power whitelist -c %s com.android.server.location.LocationManagerService > /dev/null 2>&1", app);
            system(command19);
            
            char command18[12397];
            sprintf(command18, "dumpsys power whitelist -c %s com.android.server.SensorManager > /dev/null 2>&1", app);
            system(command18);
        }
    }

    pclose(fp);
    
    printf("Apply Additional Tweaks\n");
    system("am kill-all > /dev/null 2>&1");
    system("am memory-factor set CRITICAL > /dev/null 2>1");
    system("am clear-debug-app > /dev/null 2>&1");
    system("am clear-watch-heap > /dev/null 2>&1");
    system("am fgs-notification-rate-limit enable > /dev/null 2>&1");
    system("am set-deterministic-uid-idle false > /dev/null 2>&1");
    system("am untrack-associations > /dev/null 2>&1");
    system("pm trim-caches 2048 internal > /dev/null 2>&1");
    system("pm trim-caches 1024 internal > /dev/null 2>&1");
    printf("\n");
    printf("Done\n");
    return 0;
}