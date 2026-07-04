/* Runtime dump - CKRecordGraphNode
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKRecordGraphNode : NSObject
{
    NSMutableSet * _edges;
    int _indegree;
    CKRecord * _record;
}

@property (copy, nonatomic) NSMutableSet * edges;
@property (nonatomic) int indegree;
@property (retain, nonatomic) CKRecord * record;

- (CKRecordGraphNode *)init;
- (NSString *)description;
- (void)setEdges:(NSMutableSet *)arg0;
- (void).cxx_destruct;
- (NSMutableSet *)edges;
- (CKRecord *)record;
- (void)setRecord:(CKRecord *)arg0;
- (NSString *)CKPropertiesDescription;
- (int)indegree;
- (void)setIndegree:(int)arg0;

@end
