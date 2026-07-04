/* Runtime dump - AVValue
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface AVValue : NSObject
{
    SEL _selector;
}

+ (AVValue *)valueWithSelector:(SEL)arg0;

- (AVValue *)initWithSelector:(SEL)arg0;
- (SEL)selectorValue;

@end
