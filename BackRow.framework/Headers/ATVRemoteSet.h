/* Runtime dump - ATVRemoteSet
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol ATVRCPatternMatcherDelegate;

@class ATVRCPatternMatcher;
@interface ATVRemoteSet : NSObject <ATVRCPatternMatcherDelegate>
{
    NSArray * _remoteSet;
    NSString * _name;
    char _custom;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (NSDictionary *)encodeToDictionary;
- (int)processEvent:(NSObject *)arg0;
- (id)getPatternMatcher:(int)arg0;
- (void)setCustom:(char)arg0;
- (void)applyLearnedButtonsToSet:(NSSet *)arg0 buttons:(struct _NSRange)arg1;
- (NSSet *)getPatternSet:(int)arg0;
- (int)findIdenticalButtonPattern:(NSObject *)arg0;
- (void)setPairingInfo:(unsigned long)arg0 pairingMask:(unsigned long)arg1 payloadMask:(unsigned long)arg2;
- (void)matcherButtonDown:(ATVRCPatternMatcher *)arg0;
- (void)matcherButtonRelease:(ATVRCPatternMatcher *)arg0;
- (NSArray *)_initPatternMatcherArray;
- (void)_setupTargetRemoteEvents;
- (void)_releasePatternMatchers;
- (char)hasExtendedSet;
- (void)resetMatchers;
- (char)custom;
- (void)_setupTargetEventForMatcher:(id)arg0 index:(int)arg1;
- (void)dealloc;
- (ATVRemoteSet *)init;
- (char)isEqual:(NSObject *)arg0;
- (ATVRemoteSet *)initWithDictionary:(NSDictionary *)arg0;
- (void)setName:(NSString *)arg0;
- (NSString *)name;

@end
