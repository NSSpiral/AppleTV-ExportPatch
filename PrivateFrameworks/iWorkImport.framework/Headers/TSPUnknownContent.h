/* Runtime dump - TSPUnknownContent
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPUnknownContent : NSObject
{
    NSArray * _messages;
    NSArray * _ignoreAndPreserveFields;
    NSArray * _ignoreAndDropFields;
    NSArray * _savedIgnoreAndPreserveFields;
    NSArray * _savedIgnoreAndDropFields;
}

@property (readonly, nonatomic) NSArray * messages;

+ (NSString *)unknownContentWithMessage:(struct Message *)arg0 fieldInfos:(struct FieldInfoTree *)arg1 unknownMessages:(BOOL)arg2 foundMustUnderstandFields:(struct map<int, std::__1::shared_ptr<TSP::FieldInfoNode>, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, std::__1::shared_ptr<TSP::FieldInfoNode> > > >)arg3;

- (void)willModifyObject;
- (void)saveToArchiver:(NSObject *)arg0;
- (void)updateMessageInfo:(struct MessageInfo *)arg0;
- (TSPUnknownContent *)initWithMessages:(NSArray *)arg0 ignoreAndPreserveFields:(NSArray *)arg1 ignoreAndDropFields:(NSArray *)arg2;
- (void)loadFromUnarchiver:(id)arg0;
- (TSPUnknownContent *)init;
- (void).cxx_destruct;
- (NSArray *)messages;

@end
