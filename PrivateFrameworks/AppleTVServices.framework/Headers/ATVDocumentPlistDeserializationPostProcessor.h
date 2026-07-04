/* Runtime dump - ATVDocumentPlistDeserializationPostProcessor
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVDocumentPlistDeserializationPostProcessor : NSObject <ATVDocumentPostprocessor>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (NSString *)postprocessorName;
- (NSObject *)processDocument:(NSObject *)arg0 forResponse:(NSURLResponse *)arg1 error:(id *)arg2;

@end
