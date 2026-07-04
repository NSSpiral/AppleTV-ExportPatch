/* Runtime dump - MFAddressPickerReformatter
 * Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFAddressPickerReformatter : NSObject
{
    NSArray * _addresses;
    NSArray * _reformattedAddresses;
    float _maximumWidth;
    float _minimumFontSize;
    float _maximumFontSize;
    float _fontSize;
    char _attributesDisabled;
}

- (void)setMinimumFontSize:(float)arg0 maximumFontSize:(float)arg1;
- (unsigned int)numberOfReformattedAddresses;
- (NSObject *)reformattedAddressAtIndex:(unsigned int)arg0;
- (void)_invalidateReformattedAddresses;
- (void)_updateReformattedAddressesIfNecessary;
- (unsigned int)_defaultOptions;
- (void)_determineFontSize:(char *)arg0;
- (void)_truncateIdenticalLocalPartsWithDifferentDomainParts;
- (void)_attemptUniquingDisplayedStrings;
- (void)_truncateIdenticalLocalPartsWithDifferentDomainPartsWithTailLength:(unsigned int)arg0 options:(unsigned int)arg1;
- (char)_attemptUniquingDisplayedStringsUsingBlock:(id /* block */)arg0;
- (void)_expandAllLocalParts;
- (NSArray *)_reformattedAddressesByDisplayedStrings;
- (char)_reformattedAddressesByDisplayedStringsAreUnique:(id)arg0;
- (NSArray *)_saveMiddleTruncationRanges;
- (void)_restoreMiddleTruncationRanges:(NSArray *)arg0;
- (void)setAttributesDisabled:(char)arg0;
- (NSObject *)reformattedAddressStringAtIndex:(unsigned int)arg0;
- (void)dealloc;
- (void)setMaximumWidth:(float)arg0;
- (void)setFontSize:(float)arg0;
- (void)setAddresses:(NSArray *)arg0;

@end
