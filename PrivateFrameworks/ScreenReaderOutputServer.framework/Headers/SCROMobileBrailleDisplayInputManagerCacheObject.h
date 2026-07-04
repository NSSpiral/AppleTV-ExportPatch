/* Runtime dump - SCROMobileBrailleDisplayInputManagerCacheObject
 * Image: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
 */

@interface SCROMobileBrailleDisplayInputManagerCacheObject : NSObject
{
    NSString * _driverIdentifier;
    NSString * _modelIdentifier;
    int _brailleInputMode;
    NSMutableDictionary * _commandDictionary;
    NSMutableArray * _orderedIdentifiers;
    NSBundle * _bundle;
}

@property (retain, nonatomic) NSString * modelIdentifier;
@property (nonatomic) int brailleInputMode;
@property (retain, nonatomic) NSString * driverIdentifier;
@property (retain, nonatomic) NSMutableDictionary * commandDictionary;
@property (retain, nonatomic) NSMutableArray * orderedIdentifiers;
@property (retain, nonatomic) NSBundle * bundle;

- (void)dealloc;
- (NSBundle *)bundle;
- (void)setBundle:(NSBundle *)arg0;
- (NSString *)modelIdentifier;
- (int)brailleInputMode;
- (NSString *)driverIdentifier;
- (void)setBrailleInputMode:(int)arg0;
- (void)setDriverIdentifier:(NSString *)arg0;
- (NSMutableDictionary *)commandDictionary;
- (void)setCommandDictionary:(NSMutableDictionary *)arg0;
- (NSMutableArray *)orderedIdentifiers;
- (void)setOrderedIdentifiers:(NSMutableArray *)arg0;
- (void)setModelIdentifier:(NSString *)arg0;

@end
