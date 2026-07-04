/* Runtime dump - DOMImplementation
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface DOMImplementation : DOMObject

- (void)dealloc;
- (void)finalize;
- (char)hasFeature:(NSObject *)arg0 version:(NSString *)arg1;
- (char)hasFeature:(NSObject *)arg0 :(id)arg1;
- (NSObject *)createDocumentType:(NSObject *)arg0 publicId:(NSString *)arg1 systemId:(NSString *)arg2;
- (NSObject *)createDocumentType:(NSObject *)arg0 :(id)arg1 :(id)arg2;
- (NSObject *)createDocument:(NSObject *)arg0 qualifiedName:(NSString *)arg1 doctype:(DOMDocumentType *)arg2;
- (NSObject *)createDocument:(NSObject *)arg0 :(id)arg1 :(id)arg2;
- (NSObject *)createCSSStyleSheet:(NSObject *)arg0 media:(NSObject *)arg1;
- (NSObject *)createCSSStyleSheet:(NSObject *)arg0 :(id)arg1;
- (NSObject *)createHTMLDocument:(NSObject *)arg0;

@end
