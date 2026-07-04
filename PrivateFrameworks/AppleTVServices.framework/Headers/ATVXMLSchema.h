/* Runtime dump - ATVXMLSchema
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVXMLSchema : NSObject
{
    struct _xmlSchema * _schema;
}

@property (nonatomic) struct _xmlSchema * schema;

- (void)dealloc;
- (char)_validateWithError:(id *)arg0 withBlock:(id /* block */)arg1;
- (ATVXMLSchema *)initWithSchemaData:(struct _xmlSchema *)arg0;
- (char)validateDocument:(NSObject *)arg0 error:(id *)arg1;
- (char)validateElement:(NSObject *)arg0 error:(id *)arg1;
- (struct _xmlSchema *)schema;
- (void)setSchema:(struct _xmlSchema *)arg0;

@end
