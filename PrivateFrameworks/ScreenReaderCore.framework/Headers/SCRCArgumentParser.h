/* Runtime dump - SCRCArgumentParser
 * Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@interface SCRCArgumentParser : SCRCArgumentSubcommand
{
    int _argc;
    char * * _argv;
    NSMutableArray * _subcommandArray;
    NSMutableArray * _argumentArray;
    NSString * _appName;
    SCRCArgumentSubcommand * _subcommand;
    char _isLaunchedAtLogin;
}

+ (NSString *)versionString;
+ (int)processIdentifier;
+ (NSString *)commandPath;

- (NSString *)appName;
- (void)dealloc;
- (void)stop;
- (int)run;
- (char * *)argv;
- (char)parse;
- (void)setAppName:(NSString *)arg0;
- (SCRCArgumentParser *)initWithArgc:(int)arg0 argv:(char * *)arg1;
- (id)_displayHelp:(id)arg0;
- (NSString *)_displayVersion:(NSString *)arg0;
- (int)argc;
- (char)isLaunchedAtLogin;
- (void)addSubcommand:(SCRCArgumentSubcommand *)arg0;
- (id)setRunningAtStartup:(id)arg0;

@end
