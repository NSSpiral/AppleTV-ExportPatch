/* Runtime dump - XMLNodeData
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface XMLNodeData : NSObject
{
    NSMutableSet * nodeSet;
    id extraData;
}

@property (retain, nonatomic) NSMutableSet * nodeSet;
@property (retain, nonatomic) id extraData;

- (void)dealloc;
- (void)setNodeSet:(NSMutableSet *)arg0;
- (void)setExtraData:(NSData *)arg0;
- (NSMutableSet *)nodeSet;
- (NSData *)extraData;

@end
