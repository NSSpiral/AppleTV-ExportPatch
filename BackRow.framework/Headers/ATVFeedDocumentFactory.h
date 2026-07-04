/* Runtime dump - ATVFeedDocumentFactory
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVBaseFeedDocumentFactory.h>

@class ATVJSContext, BRMerchant;
@interface ATVFeedDocumentFactory : ATVBaseFeedDocumentFactory

+ (NSObject *)feedDocumentFromURLDocument:(NSObject *)arg0 error:(id *)arg1;
+ (NSObject *)feedDocumentWithXMLDocument:(NSObject *)arg0 merchant:(BRMerchant *)arg1 sourceURL:(NSURL *)arg2 error:(id *)arg3;
+ (NSDictionary *)_feedDocumentWithPlist:(NSDictionary *)arg0 error:(id *)arg1;
+ (ATVFeedDocumentFactory *)_feedDocumentWithXML:(id)arg0 error:(id *)arg1;
+ (NSObject *)feedDocumentWithXMLDocument:(NSObject *)arg0 merchant:(BRMerchant *)arg1 sourceURL:(NSURL *)arg2 jsContext:(ATVJSContext *)arg3 jsXMLDocument:(NSObject *)arg4 error:(id *)arg5;
+ (void)_evaluateScripts:(id)arg0 inContext:(NSObject *)arg1;
+ (NSData *)feedDocumentWithXMLData:(NSData *)arg0 merchant:(BRMerchant *)arg1 sourceURL:(NSURL *)arg2 error:(id *)arg3;
+ (char)updateFeedDocument:(NSObject *)arg0 withXMLDocument:(NSObject *)arg1 error:(id *)arg2;

@end
