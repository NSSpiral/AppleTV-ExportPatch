/* Runtime dump - SCROBrailleKey
 * Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

@interface SCROBrailleKey : NSObject <NSCoding>
{
    NSMutableArray * _maskArray;
    NSString * _identifier;
    long _routerIndex;
    int _routerToken;
    long _routerLocation;
    char _hasRouterInfo;
    id _appToken;
    long _displayToken;
    int _displayMode;
}

- (void)dealloc;
- (SCROBrailleKey *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SCROBrailleKey *)init;
- (NSString *)description;
- (NSString *)identifier;
- (int)displayMode;
- (void)setDisplayMode:(int)arg0;
- (unsigned int *)keyMasks;
- (char)getRouterIndex:(int *)arg0 token:(int *)arg1 location:(int *)arg2 appToken:(id *)arg3;
- (void)setDisplayToken:(long)arg0;
- (void)addKeyMask:(unsigned long)arg0;
- (void)setRouterIndex:(long)arg0 token:(int)arg1 location:(long)arg2 appToken:(id *)arg3;
- (long)displayToken;

@end
