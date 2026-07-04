/* Runtime dump - BWSourceNode
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWSourceNode : BWNode
{
    <BWSourceNodeErrorDelegate> * _errorDelegate;
}

@property (readonly, nonatomic) struct OpaqueCMClock * clock;
@property (nonatomic) <BWSourceNodeErrorDelegate> * errorDelegate;

- (NSString *)nodeType;
- (char)start:(id *)arg0;
- (void)setErrorDelegate:(<BWSourceNodeErrorDelegate> *)arg0;
- (<BWSourceNodeErrorDelegate> *)errorDelegate;
- (char)stop:(id *)arg0;
- (struct OpaqueCMClock *)clock;

@end
