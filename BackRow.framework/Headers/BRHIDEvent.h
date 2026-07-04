/* Runtime dump - BRHIDEvent
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BREvent.h>
@interface BRHIDEvent : BREvent
{
    unsigned short _page;
    unsigned short _usage;
    unsigned long long _extendedSignature;
}

+ (BRHIDEvent *)eventWithPage:(unsigned short)arg0 usage:(unsigned short)arg1 value:(int)arg2 extendedSignature:(unsigned long long)arg3;
+ (BRHIDEvent *)eventWithPage:(unsigned short)arg0 usage:(unsigned short)arg1 value:(int)arg2 extendedSignature:(unsigned long long)arg3 atTime:(double)arg4;
+ (BRHIDEvent *)eventWithPage:(unsigned short)arg0 usage:(unsigned short)arg1 value:(int)arg2;
+ (BRHIDEvent *)eventWithPage:(unsigned short)arg0 usage:(unsigned short)arg1 value:(int)arg2 atTime:(double)arg3;

- (unsigned long long)extendedSignature;
- (BRHIDEvent *)initWithPage:(unsigned short)arg0 usage:(unsigned short)arg1 value:(int)arg2;
- (BRHIDEvent *)initWithPage:(unsigned short)arg0 usage:(unsigned short)arg1 value:(int)arg2 extendedSignature:(unsigned long long)arg3 atTime:(double)arg4;
- (BRHIDEvent *)initWithPage:(unsigned short)arg0 usage:(unsigned short)arg1 value:(int)arg2 extendedSignature:(unsigned long long)arg3;
- (BRHIDEvent *)initWithPage:(unsigned short)arg0 usage:(unsigned short)arg1 value:(int)arg2 atTime:(double)arg3;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (unsigned short)page;
- (unsigned short)usage;

@end
