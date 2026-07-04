/* Runtime dump - AXSpringBoardActionHandlerHolder
 * Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXSpringBoardActionHandlerHolder : NSObject
{
    id _handler;
    int _type;
    NSString * _identifier;
}

@property (copy, nonatomic) id handler;
@property (nonatomic) int type;
@property (copy, nonatomic) NSString * identifier;

- (void)dealloc;
- (NSString *)identifier;
- (void)setType:(int)arg0;
- (int)type;
- (void)setIdentifier:(NSString *)arg0;
- (void)setHandler:(id /* block */)arg0;
- (id /* block */)handler;

@end
