/* Runtime dump - PDAnimation
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PDAnimation : NSObject
{
    PDRootTimeNode * mRootTimeNode;
    OITSUNoCopyDictionary * mBuildMap;
}

+ (void)initialize;

- (void)dealloc;
- (PDAnimation *)init;
- (NSObject *)rootTimeNode;
- (NSObject *)addRootTimeNode;
- (NSObject *)buildMap;
- (void)setBuildMap:(NSObject *)arg0;

@end
