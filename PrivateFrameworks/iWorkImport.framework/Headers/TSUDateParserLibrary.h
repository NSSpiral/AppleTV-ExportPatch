/* Runtime dump - TSUDateParserLibrary
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUDateParserLibrary : NSObject
{
    TSULocale * mLocale;
    unsigned int mMaxPermittedParsers;
    unsigned int mNumberOfUses;
    unsigned int mParsersCreated;
    NSMutableArray * mAvailableDateParsers;
    NSCondition * mParserLibraryConditionVariable;
}

- (NSObject *)checkoutDateParser;
- (TSUDateParserLibrary *)initWithLocale:(NSObject *)arg0;
- (void)returnDateParser:(NSObject *)arg0;

@end
