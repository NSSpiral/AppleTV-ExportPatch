/* Runtime dump - TCXmlPrefixStreamWriterState
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface TCXmlPrefixStreamWriterState : NSObject
{
    NSString * _elementPrefix;
    NSString * _attributePrefix;
}

@property (copy, nonatomic) NSString * elementPrefix;
@property (copy, nonatomic) NSString * attributePrefix;

- (void)dealloc;
- (NSString *)elementPrefix;
- (void)setElementPrefix:(NSString *)arg0;
- (NSString *)attributePrefix;
- (void)setAttributePrefix:(NSString *)arg0;

@end
