/* Runtime dump - IKDOMSchema
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKDOMSchema : NSObject
{
    struct _xmlSchema * _schemaPtr;
}

- (void)dealloc;
- (IKDOMSchema *)initWithSchemaData:(NSData *)arg0;
- (char)validateDocument:(NSObject *)arg0 error:(id *)arg1;

@end
