/* Runtime dump - CAIAANodeInfo
 * Image: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
 */

@interface CAIAANodeInfo : NSObject
{
    NSMutableArray * nodeList;
    UIColor * labelColor;
}

@property (readonly) unsigned int numNodes;
@property (retain) UIColor * labelColor;

- (unsigned int)numNodes;
- (void)createNodeList;
- (NSDictionary *)nodeWithNodeInfo:(NSDictionary *)arg0;
- (void)refresh;
- (CAIAANodeInfo *)init;
- (NSObject *)nodeAtIndex:(unsigned int)arg0;
- (UIColor *)labelColor;
- (void)setLabelColor:(UIColor *)arg0;

@end
