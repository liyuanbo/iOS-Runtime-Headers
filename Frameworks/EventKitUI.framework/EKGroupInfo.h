/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class EKSource, NSArray, NSMutableArray, NSSet, NSString;

@interface EKGroupInfo : NSObject {
    NSMutableArray *_calendars;
    int _customGroupType;
    NSString *_customTitle;
    NSString *_customTitleAtBeginningOfSentence;
    EKSource *_source;
    NSString *_title;
    NSString *_titleForBeginningOfSentence;
    NSString *_typeTitle;
    bool_selected;
    bool_showSelectAllButton;
}

@property(retain,readonly) NSArray * calendarInfos;
@property(copy,readonly) NSSet * calendarSet;
@property(readonly) bool isSubscribed;
@property(readonly) unsigned long long numCalendars;
@property(readonly) unsigned long long numSelectableCalendars;
@property(readonly) unsigned long long numSelectedCalendars;
@property bool selected;
@property(copy,readonly) NSSet * selectedCalendarSet;
@property(readonly) bool showAddCalendarButton;
@property(readonly) bool showCalendarNameIfSolitary;
@property bool showSelectAllButton;
@property(readonly) int sortOrder;
@property(retain) EKSource * source;
@property(copy,readonly) NSString * title;
@property(copy,readonly) NSString * typeTitle;

- (void).cxx_destruct;
- (id)calendarAtIndex:(unsigned long long)arg1;
- (id)calendarInfos;
- (id)calendarSet;
- (id)copyCalendars;
- (id)description;
- (id)init;
- (id)initWithCustomGroupType:(int)arg1;
- (id)initWithSource:(id)arg1;
- (void)insertCalendarInfo:(id)arg1;
- (void)insertDeclinedEventsItem;
- (bool)isSubscribed;
- (unsigned long long)numCalendars;
- (unsigned long long)numSelectableCalendars;
- (unsigned long long)numSelectedCalendars;
- (void)removeCalendar:(id)arg1;
- (void)selectAll;
- (void)selectNone;
- (bool)selected;
- (id)selectedCalendarSet;
- (void)setCustomTitle:(id)arg1 forBeginningOfSentence:(id)arg2;
- (void)setSelected:(bool)arg1;
- (void)setShowSelectAllButton:(bool)arg1;
- (void)setSource:(id)arg1;
- (bool)showAddCalendarButton;
- (bool)showCalendarNameIfSolitary;
- (bool)showSelectAllButton;
- (int)sortOrder;
- (id)source;
- (id)title;
- (id)titleForBeginningOfSentence:(bool)arg1;
- (id)typeTitle;

@end