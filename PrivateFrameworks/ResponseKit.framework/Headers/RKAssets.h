/* Runtime dump - RKAssets
 * Image: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
 */

@interface RKAssets : NSObject

+ (RKAssets *)categoryResponsesEditable;
+ (RKAssets *)categoryResponsesNonEditable;
+ (RKAssets *)fixedPhrases;
+ (NSObject *)categoryKeywordMap;
+ (RKAssets *)sensitiveSubjectRegularExpressionPatterns;
+ (RKAssets *)polarTagKeywords;
+ (RKAssets *)alternativeInversions;
+ (RKAssets *)appreciationKeywords;
+ (RKAssets *)categoryKeywords;
+ (RKAssets *)sensitiveSubjectKeywords;
+ (NSArray *)synonyms;
+ (RKAssets *)wordIDs;

@end
