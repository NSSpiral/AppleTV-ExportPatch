/* Runtime dump - ECIntToIntNilDictionary
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface ECIntToIntNilDictionary : OITSUIntToIntDictionary
{
    char mNilValueSet;
    int mNilValue;
}

- (void)setInt:(int)arg0 forKey:(int)arg1;
- (char)intIsPresentForKey:(int)arg0 outValue:(int *)arg1;

@end
