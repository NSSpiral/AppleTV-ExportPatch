/* Runtime dump - KNHLController
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNHLController : NSObject

+ (int)hyperlinkTypeFromHyperlinkURL:(NSURL *)arg0;
+ (NSURL *)uniqueIdentifierFromHyperlinkURL:(NSURL *)arg0;
+ (char)URLContainsKeynoteSpecificHyperlink:(id)arg0;
+ (char)allowEditingOfDisplayText:(NSString *)arg0;
+ (NSObject *)smartFieldForRep:(NSObject *)arg0 atUnscaledPoint:(struct CGPoint)arg1 outRep:(id *)arg2;
+ (char)isExternalHyperlinkURL:(NSURL *)arg0;

@end
