/* Runtime dump - ATVDocumentStoreProtocolPostprocessor
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVDocumentStoreProtocolPostprocessor : NSObject <ATVDocumentPostprocessor>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (void)initialize;
+ (NSObject *)processXMLDocument:(NSObject *)arg0;

- (NSString *)postprocessorName;
- (NSObject *)processDocument:(NSObject *)arg0 forResponse:(NSURLResponse *)arg1 error:(id *)arg2;
- (NSObject *)_processDocument:(NSObject *)arg0;
- (void)_processConditionalGroups:(id)arg0;
- (void)_processIncludes:(id)arg0;
- (NSObject *)_dictionaryFromElement:(NSObject *)arg0;
- (NSDictionary *)_newDocumentLoaderWithIncludeDictionary:(NSDictionary *)arg0;
- (void)_processIncludedDocumentContent:(NSObject *)arg0 forElement:(NSObject *)arg1;
- (void)_replaceElement:(NSObject *)arg0 withContainedElementNamed:(id)arg1;
- (void)_replaceElement:(NSObject *)arg0 withElement:(NSObject *)arg1;
- (void)_processConditionalGroupElement:(NSObject *)arg0;
- (char)_processConditionalGroupDictionary:(NSDictionary *)arg0;
- (void)_removeElement:(NSObject *)arg0;
- (char)_evaluateConditional:(id)arg0;
- (char)_processConditionalResult:(char)arg0 isAnd:(char)arg1 isOr:(char)arg2 isNot:(char)arg3;
- (char)_evaluateKey:(NSString *)arg0 operator:(_NSItemProviderExtensionVendorLoadOperator *)arg1 value:(NSObject *)arg2;

@end
