/* Runtime dump - TUCallGroup
 * Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUCallGroup : NSObject
{
    NSArray * _calls;
}

@property (retain) NSArray * calls;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (NSString *)methodSignatureForSelector:(SEL)arg0;
- (void)forwardInvocation:(NSInvocation *)arg0;
- (NSString *)displayName;
- (int)status;
- (NSArray *)calls;
- (void)setCalls:(NSArray *)arg0;

@end
