/* Runtime dump - AXEventListenerContainer
 * Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXEventListenerContainer : NSObject
{
    id handler;
    NSString * identifier;
}

@property (copy, nonatomic) id handler;
@property (retain, nonatomic) NSString * identifier;

- (NSString *)identifier;
- (void)setIdentifier:(NSString *)arg0;
- (void)setHandler:(id /* block */)arg0;
- (id /* block */)handler;

@end
