/* Runtime dump - TSPUnknownFieldMessage
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPUnknownFieldMessage : TSPUnknownField
{
    TSPLazyReferenceArray * _objects;
    NSArray * _datas;
}

- (void)saveToArchiver:(NSObject *)arg0;
- (void)loadFromUnarchiver:(id)arg0;
- (NSString *)debugDescription;
- (void).cxx_destruct;

@end
