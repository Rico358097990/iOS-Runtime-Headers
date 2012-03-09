/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

@class <NSObject>, NSObject;

@interface ABValuePredicate : ABPredicate  {
    int _property;
    int _comparison;
    <NSObject> *_value;
    BOOL _dictionaryValue;
}

@property(copy) NSObject * value;
@property int comparison;
@property int property;

+ (id)stringForComparison:(id)arg1 withComparision:(long)arg2;

- (id)init;
- (void)dealloc;
- (id)stringForComparison:(id)arg1;
- (id)querySelectProperties;
- (id)queryJoinsInCompound:(BOOL)arg1;
- (id)queryWhereString;
- (void)ab_bindStatement:(struct CPSqliteStatement { struct CPSqliteConnection {} *x1; struct sqlite3_stmt {} *x2; }*)arg1 withBindingOffset:(int*)arg2 predicateIdentifier:(int)arg3;
- (id)value;
- (void)setValue:(id)arg1;
- (BOOL)isValid;
- (long)comparison;
- (void)setComparison:(long)arg1;
- (void)setProperty:(int)arg1;
- (id)predicateFormat;
- (int)property;

@end