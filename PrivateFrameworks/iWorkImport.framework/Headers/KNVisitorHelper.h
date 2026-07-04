/* Runtime dump - KNVisitorHelper
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNVisitorHelper : NSObject

+ (char)info:(NSDictionary *)arg0 hasSamePlaceholderTypeAsInfo:(NSDictionary *)arg1;
+ (KNVisitorHelper *)infoOnSlide:(id)arg0 correspondingToInfo:(NSDictionary *)arg1 inMasterPropertySource:(NSObject *)arg2;
+ (NSObject *)infoInMasterSlidePropertySource:(NSObject *)arg0 correspondingToInfo:(NSDictionary *)arg1 inAbstractSlidePropertySource:(NSObject *)arg2;
+ (char)infoIsPlaceholder:(id)arg0 inAbstractSlidePropertySource:(NSObject *)arg1;
+ (NSDictionary *)tagForInfo:(NSDictionary *)arg0 inAbstractSlidePropertySource:(NSObject *)arg1;
+ (KNVisitorHelper *)commandsForSynchronizingPlaceholdersForSlide:(id)arg0 oldMasterSlidePropertySource:(NSObject *)arg1 newMasterSlidePropertySource:(NSObject *)arg2 alwaysMatchNewMaster:(char)arg3 outNewZOrderArray:(NSArray *)arg4 outPlaceholdersForTags:(id)arg5;

@end
