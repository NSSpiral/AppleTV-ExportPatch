/* Runtime dump - IKGridElement
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKGridElement : IKCollectionElement
{
    char _paged;
}

@property (readonly, nonatomic) unsigned int columnCount;
@property (readonly, nonatomic) NSString * rowHeight;
@property (readonly, nonatomic) char paged;
@property (readonly, nonatomic) unsigned int rowCount;

- (NSString *)rowHeight;
- (unsigned int)columnCount;
- (IKGridElement *)initWithDOMElement:(NSObject *)arg0 parent:(NSObject *)arg1 elementFactory:(IKViewElementFactory *)arg2;
- (char)isPaged;
- (unsigned int)rowCount;

@end
