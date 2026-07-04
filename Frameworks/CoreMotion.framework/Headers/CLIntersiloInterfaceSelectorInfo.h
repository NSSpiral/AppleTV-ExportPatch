/* Runtime dump - CLIntersiloInterfaceSelectorInfo
 * Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CLIntersiloInterfaceSelectorInfo : NSObject
{
    SEL _sel;
    int _numArguments;
    int _replyBlockIndex;
    int _returnAddressIndex;
    int _returnValueSize;
    NSMethodSignature * _sig;
    NSString * _str;
}

@property (readonly, nonatomic) SEL sel;
@property (readonly, nonatomic) int numArguments;
@property (readonly, nonatomic) int replyBlockIndex;
@property (readonly, nonatomic) int returnAddressIndex;
@property (readonly, nonatomic) int returnValueSize;
@property (readonly, retain, nonatomic) NSMethodSignature * sig;
@property (readonly, retain, nonatomic) NSString * str;

- (NSString *)str;
- (CLIntersiloInterfaceSelectorInfo *)initWithSelector:(SEL)arg0 andMethodSignature:(NSObject *)arg1;
- (SEL)sel;
- (int)numArguments;
- (int)replyBlockIndex;
- (int)returnAddressIndex;
- (int)returnValueSize;
- (NSMethodSignature *)sig;
- (NSString *)description;
- (void).cxx_destruct;

@end
