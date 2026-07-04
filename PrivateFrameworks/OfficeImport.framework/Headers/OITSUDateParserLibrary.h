/* Runtime dump - OITSUDateParserLibrary
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OITSUDateParserLibrary : NSObject
{
    unsigned int mMaxPermittedParsers;
    unsigned int mNumberOfUses;
    unsigned int mParsersCreated;
    NSMutableArray * mAvailableDateParsers;
    NSCondition * mParserLibraryConditionVariable;
}

+ (OITSUDateParserLibrary *)allocWithZone:(struct _NSZone *)arg0;
+ (OITSUDateParserLibrary *)_singletonAlloc;
+ (OITSUDateParserLibrary *)sharedDateParserLibrary;

- (OITSUDateParserLibrary *)retain;
- (void)release;
- (OITSUDateParserLibrary *)init;
- (OITSUDateParserLibrary *)autorelease;
- (unsigned int)retainCount;
- (OITSUDateParserLibrary *)copyWithZone:(struct _NSZone *)arg0;
- (NSObject *)checkoutDateParser;
- (void)returnDateParser:(NSObject *)arg0;

@end
