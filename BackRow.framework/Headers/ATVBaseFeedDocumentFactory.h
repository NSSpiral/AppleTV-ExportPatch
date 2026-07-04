/* Runtime dump - ATVBaseFeedDocumentFactory
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class BRMerchant;
@interface ATVBaseFeedDocumentFactory : NSObject

+ (ATVBaseFeedDocumentFactory *)atvSchema;
+ (NSError *)_feedDocumentErrorFromXMLError:(NSError *)arg0;
+ (NSObject *)feedDocumentWithXMLDocument:(NSObject *)arg0 merchant:(BRMerchant *)arg1 sourceURL:(NSURL *)arg2 error:(id *)arg3;

@end
