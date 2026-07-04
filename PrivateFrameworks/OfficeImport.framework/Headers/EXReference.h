/* Runtime dump - EXReference
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EXReference : NSObject

+ (NSObject *)edReferenceFromXmlReference:(NSObject *)arg0;
+ (EXReference *)numberToStringBase26:(int)arg0;
+ (NSObject *)xmlReferenceFromAreaReference:(struct EDAreaReference *)arg0;
+ (BOOL)edAreaReferenceFromXmlReference:(NSObject *)arg0 areaReference:(struct EDAreaReference *)arg1;
+ (NSObject *)xmlReferenceFromEDReference:(NSObject *)arg0;
+ (NSArray *)edDiscontinousReferencesFromXmlRanges:(NSArray *)arg0;
+ (EXReference *)xmlRangesFromDiscontinuousReferences:(id)arg0;

@end
