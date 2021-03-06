//
//	CPHelperToolCommon.c
//	ControlPlane
//
//	Created by Dustin Rue on 3/9/11.
//	Copyright 2011. All rights reserved.
//

#import "CPHelperToolCommon.h"
#import "BetterAuthorizationSampleLib.h"

const BASCommandSpec kCPHelperToolCommandSet[] = {
	{	kCPHelperToolGetVersionCommand,		// commandName
		NULL,								// rightName
		NULL,								// rightDefaultRule
		NULL,								// rightDescriptionKey
		NULL								// userData
	},
	{	kCPHelperToolEnableTMCommand,
		kCPHelperToolToggleTMRightName,
		"allow",
		"EnableTM",
		NULL
	},
	{	kCPHelperToolDisableTMCommand,
		kCPHelperToolToggleTMRightName,
		"allow",
		"DisableTM",
		NULL
	},
	{	kCPHelperToolStartBackupTMCommand,
		kCPHelperToolRunBackupTMRightName,
		"allow",
		"StartBackupTM",
		NULL
	},
	{	kCPHelperToolStopBackupTMCommand,
		kCPHelperToolRunBackupTMRightName,
		"allow",
		"StopBackupTM",
		NULL
	},
    {   kCPHelperToolEnableISCommand,
        kCPHelperToolToggleISRightName,
        "allow",
        "EnableIS",
        NULL
    },
    {   kCPHelperToolDisableISCommand,
        kCPHelperToolToggleISRightName,
        "allow",
        "DisableIS",
        NULL
    },
    {   kCPHelperToolEnableFirewallCommand,
        kCPHelperToolToggleFWRightName,
        "allow",
        "EnableFirewall",
        NULL
    },
    {   kCPHelperToolDisableFirewallCommand,
        kCPHelperToolToggleFWRightName,
        "allow",
        "DisableFirewall",
        NULL
    },
    {   kCPHelperToolSetDisplaySleepTimeCommand,
        kCPHelperToolSetDisplaySleepTimeRightName,
        "allow",
        "SetMonitorSleepTime",
        NULL
    },
	{	NULL,
		NULL,
		NULL,
		NULL,
		NULL
	}
};
