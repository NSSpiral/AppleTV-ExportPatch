/* Runtime dump - UIRuntimeEventConnection
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIRuntimeEventConnection : UIRuntimeConnection
{
    unsigned int eventMask;
}

@property unsigned int eventMask;
@property (readonly) SEL action;
@property (readonly) id target;

- (UIRuntimeEventConnection *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (SEL)action;
- (NSObject *)target;
- (void)connectForSimulator;
- (void)connect;
- (unsigned int)eventMask;
- (void)setEventMask:(unsigned int)arg0;

@end
