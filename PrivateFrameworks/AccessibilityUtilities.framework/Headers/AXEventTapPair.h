/* Runtime dump - AXEventTapPair
 * Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXEventTapPair : NSObject
{
    id handler;
    NSString * identifier;
    int priority;
    int _type;
    struct __IOHIDEventSystemClient * _systemClient;
}

@property (copy, nonatomic) id handler;
@property (copy, nonatomic) NSString * identifier;
@property (nonatomic) int priority;
@property (nonatomic) int type;
@property (retain, nonatomic) struct __IOHIDEventSystemClient * systemClient;

- (void)dealloc;
- (NSString *)description;
- (NSString *)identifier;
- (void)setType:(int)arg0;
- (int)type;
- (void)setIdentifier:(NSString *)arg0;
- (void)setHandler:(id /* block */)arg0;
- (id /* block */)handler;
- (void)setPriority:(int)arg0;
- (int)priority;
- (struct __IOHIDEventSystemClient *)systemClient;
- (void)setSystemClient:(struct __IOHIDEventSystemClient *)arg0;

@end
