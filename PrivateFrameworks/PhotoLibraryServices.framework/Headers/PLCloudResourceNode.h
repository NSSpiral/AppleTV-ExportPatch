/* Runtime dump - PLCloudResourceNode
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudResourceNode : PLManagedObject

@property (nonatomic) unsigned long long totalResourceSize;
@property (nonatomic) unsigned long long totalResourceCount;
@property (nonatomic) unsigned short color;
@property (retain, nonatomic) PLCloudResource * resource;
@property (nonatomic) unsigned short qualityClass;
@property (nonatomic) unsigned short budgetingCategory;
@property (retain, nonatomic) PLCloudResourceNode * next;
@property (retain, nonatomic) PLCloudResourceNode * parent;
@property (retain, nonatomic) PLCloudResourceNode * leftChild;
@property (retain, nonatomic) PLCloudResourceNode * rightChild;

+ (NSString *)entityName;

- (NSString *)description;
- (NSObject *)nodeAtIndex:(unsigned int)arg0 withLocalRoot:(char)arg1;
- (void)insertChildNode:(NSObject *)arg0 usingComparer:(id)arg1;
- (NSObject *)grandparentNode;
- (char)isNullNode;
- (char)isLeaf;
- (unsigned int)nodeHeight;
- (NSObject *)nodeAtIndex:(unsigned int)arg0;
- (NSObject *)uncleNode;
- (NSObject *)siblingNode;
- (void)rotateRightWithTreeRoot:(id *)arg0;
- (void)rotateLeftWithTreeRoot:(id *)arg0;
- (NSObject *)successorNode;
- (NSObject *)predecessorNode;

@end
