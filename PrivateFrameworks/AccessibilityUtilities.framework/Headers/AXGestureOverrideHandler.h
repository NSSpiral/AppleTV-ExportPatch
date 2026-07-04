/* Runtime dump - AXGestureOverrideHandler
 * Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXGestureOverrideHandler : NSObject
{
    id _handler;
    unsigned int _type;
    NSString * _identifier;
}

@property (copy, nonatomic) id handler;
@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString * identifier;

- (void)dealloc;
- (NSString *)identifier;
- (void)setType:(unsigned int)arg0;
- (unsigned int)type;
- (void)setIdentifier:(NSString *)arg0;
- (void)setHandler:(id /* block */)arg0;
- (id /* block */)handler;

@end
