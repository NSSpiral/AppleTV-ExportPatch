/* Runtime dump - SCRCArgumentSubcommand
 * Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@interface SCRCArgumentSubcommand : NSObject
{
    NSString * _subcommandName;
    NSMutableArray * _optionArray;
}

+ (NSString *)subcommandWithName:(NSString *)arg0;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (int)compare:(NSObject *)arg0;
- (void)stop;
- (int)run;
- (SCRCArgumentSubcommand *)initWithName:(NSString *)arg0;
- (void)showHelp;
- (void)addOption:(WebAVMediaSelectionOption *)arg0 argument:(void *)arg1 target:(NSObject *)arg2 action:(SEL)arg3 argumentDescription:(NSString *)arg4 required:(char)arg5;
- (NSMutableArray *)optionArray;
- (NSString *)subcommandName;
- (NSString *)formattedHelpHeader;
- (id)formattedHelpFooter;
- (void)addOptions;
- (void)stopDueToSigTerm;

@end
