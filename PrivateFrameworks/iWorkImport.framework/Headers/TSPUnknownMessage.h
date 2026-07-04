/* Runtime dump - TSPUnknownMessage
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPUnknownMessage : NSObject
{
    struct MessageInfo _messageInfo;
    NSObject<OS_dispatch_data> * _messageData;
    TSPLazyReferenceArray * _objects;
    NSArray * _datas;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_data> * messageData;
@property (retain, nonatomic) TSPLazyReferenceArray * objects;
@property (retain, nonatomic) NSArray * datas;

- (struct MessageInfo *)messageInfo;
- (TSPUnknownMessage *)initWithMessageInfo:(struct MessageInfo *)arg0 data:(struct MessageInfo)arg1;
- (TSPLazyReferenceArray *)objects;
- (TSPUnknownMessage *)init;
- (void).cxx_construct;
- (void).cxx_destruct;
- (NSObject<OS_dispatch_data> *)messageData;
- (void)setObjects:(TSPLazyReferenceArray *)arg0;
- (void)setDatas:(NSArray *)arg0;
- (NSArray *)datas;

@end
