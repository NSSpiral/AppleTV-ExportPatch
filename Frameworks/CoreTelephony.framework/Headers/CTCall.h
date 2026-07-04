/* Runtime dump - CTCall
 * Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@interface CTCall : NSObject
{
    NSString * _callState;
    NSString * _callID;
}

@property (copy, nonatomic) NSString * callState;
@property (copy, nonatomic) NSString * callID;

+ (CTCall *)callForCTCallRef:(struct __CTCall *)arg0;

- (NSString *)callState;
- (void)setCallState:(NSString *)arg0;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSString *)callID;
- (void)setCallID:(NSString *)arg0;

@end
