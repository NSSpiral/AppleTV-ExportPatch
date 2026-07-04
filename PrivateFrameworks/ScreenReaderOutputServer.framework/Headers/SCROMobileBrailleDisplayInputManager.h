/* Runtime dump - SCROMobileBrailleDisplayInputManager
 * Image: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
 */

@interface SCROMobileBrailleDisplayInputManager : NSObject <SCROBrailleDisplayInputManagerProtocol>
{
    NSMutableDictionary * _displayInfoDict;
    NSSet * _brailleKeys;
    NSBundle * _bundle;
    NSArray * _sixDotCommands;
    NSArray * _eightDotCommands;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (void)initialize;
+ (SCROMobileBrailleDisplayInputManager *)allocWithZone:(struct _NSZone *)arg0;
+ (SCROMobileBrailleDisplayInputManager *)sharedManager;

- (SCROMobileBrailleDisplayInputManager *)retain;
- (void)release;
- (void)dealloc;
- (SCROMobileBrailleDisplayInputManager *)init;
- (SCROMobileBrailleDisplayInputManager *)autorelease;
- (unsigned int)retainCount;
- (SCROMobileBrailleDisplayInputManager *)copyWithZone:(struct _NSZone *)arg0;
- (NSObject<OS_xpc_object> *)_bundle;
- (id)_commandsFromBrailleInputMode:(int)arg0;
- (NSArray *)_sixDotCommands;
- (NSArray *)_eightDotCommands;
- (NSObject *)inputIdentifierAtIndex:(unsigned int)arg0 forDisplayWithToken:(long)arg1;
- (NSString *)buttonNamesForInputIdentifier:(NSString *)arg0 forDisplayWithToken:(long)arg1;
- (void)configureWithDriverConfiguration:(NSArray *)arg0;
- (NSString *)commandForBrailleKey:(SCROBrailleKey *)arg0;
- (NSString *)driverIdentifierForDisplayWithToken:(long)arg0;
- (NSString *)modelIdentifierForDisplayWithToken:(long)arg0;
- (unsigned int)countForDisplayWithToken:(long)arg0;
- (NSObject *)commandAtIndex:(unsigned int)arg0 forDisplayWithToken:(long)arg1;
- (NSObject *)buttonNamesAtIndex:(unsigned int)arg0 forDisplayWithToken:(long)arg1;

@end
