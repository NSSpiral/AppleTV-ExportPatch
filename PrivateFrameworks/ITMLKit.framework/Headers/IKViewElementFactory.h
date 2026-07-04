/* Runtime dump - IKViewElementFactory
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKViewElementFactory : NSObject
{
    struct ? _parsingFlags;
    IKViewElementStyleFactory * _styleFactory;
}

@property (retain, nonatomic) IKViewElementStyleFactory * styleFactory;
@property (nonatomic) char sparse;

+ (void)initialize;
+ (NSObject *)elementsForDocumentElement:(NSObject *)arg0 sparse:(char)arg1 styleFactory:(id *)arg2;
+ (void)registerClass:(Class)arg0 forElementName:(NSString *)arg1 elementType:(unsigned int)arg2;
+ (Class)elementClassByTagName:(NSString *)arg0;
+ (unsigned int)elementTypeByTagName:(NSString *)arg0;

- (void).cxx_destruct;
- (IKViewElementStyleFactory *)styleFactory;
- (void)setStyleFactory:(IKViewElementStyleFactory *)arg0;
- (NSObject *)elementForDOMElement:(NSObject *)arg0 parent:(NSObject *)arg1;
- (void)setSparse:(char)arg0;
- (char)isSparse;

@end
