/*
 *
 *  Copyright (C) 2008-2012, OFFIS e.V. and ICSMED AG, Oldenburg, Germany
 *  Copyright (C) 2013-2016, J. Riesmeier, Oldenburg, Germany
 *  All rights reserved.  See COPYRIGHT file for details.
 *
 *  Header file for class DRTPrivateDataElementDefinitionSequence
 *
 *  Generated automatically from DICOM PS 3.3-2016d
 *  File created on 2016-10-12 13:44:31
 *
 */


#ifndef DRTPDEDS_H
#define DRTPDEDS_H

#include "dcmtk/config/osconfig.h"     // make sure OS specific configuration is included first

#include "dcmtk/ofstd/oflist.h"        // for standard list class
#include "dcmtk/dcmrt/drttypes.h"      // module-specific helper class


/** Interface class for PrivateDataElementDefinitionSequence (0008,0310)
 */
class DCMTK_DCMRT_EXPORT DRTPrivateDataElementDefinitionSequence
  : protected DRTTypes
{

  public:

    /** Item class
     */
    class DCMTK_DCMRT_EXPORT Item
      : protected DRTTypes
    {

      public:

      // --- constructors, destructor and operators ---

        /** (default) constructor
         *  @param emptyDefaultItem flag used to mark the empty default item
         */
        Item(const OFBool emptyDefaultItem = OFFalse);

        /** copy constructor
         *  @param copy item object to be copied
         */
        Item(const Item &copy);

        /** destructor
         */
        virtual ~Item();

        /** assigment operator
         *  @param copy item object to be copied
         */
        Item &operator=(const Item &copy);

      // --- general methods ---

        /** clear all internal member variables
         */
        void clear();

        /** check if item is empty
         *  @return OFTrue if item is empty, OFFalse otherwise
         */
        OFBool isEmpty();

        /** check if item is valid, i.e.\ not the empty default item
         *  @return OFTrue if item is valid, OFFalse otherwise
         */
        OFBool isValid() const;

      // --- input/output methods ---

        /** read elements from sequence item
         *  @param  item    reference to DICOM sequence item from which the elements should be read
         *  @return status, EC_Normal if successful, an error code otherwise
         */
        OFCondition read(DcmItem &item);

        /** write elements to sequence item
         *  @param  item    reference to DICOM sequence item to which the elements should be written
         *  @return status, EC_Normal if successful, an error code otherwise
         */
        OFCondition write(DcmItem &item);

      // --- get DICOM attribute values ---

        /** get PrivateDataElement (0008,0308)
         *  @param  value  reference to variable in which the value should be stored
         *  @param  pos    index of the value to get (0..vm-1)
         *  @return status, EC_Normal if successful, an error code otherwise
         */
        OFCondition getPrivateDataElement(Uint16 &value, const unsigned long pos = 0) const;

        /** get PrivateDataElementDescription (0008,030e)
         *  @param  value  reference to variable in which the value should be stored
         *  @param  pos    index of the value to get (0..vm-1), -1 for all components
         *  @return status, EC_Normal if successful, an error code otherwise
         */
        OFCondition getPrivateDataElementDescription(OFString &value, const signed long pos = 0) const;

        /** get PrivateDataElementEncoding (0008,030f)
         *  @param  value  reference to variable in which the value should be stored
         *  @param  pos    index of the value to get (0..vm-1), -1 for all components
         *  @return status, EC_Normal if successful, an error code otherwise
         */
        OFCondition getPrivateDataElementEncoding(OFString &value, const signed long pos = 0) const;

        /** get PrivateDataElementKeyword (0008,030d)
         *  @param  value  reference to variable in which the value should be stored
         *  @param  pos    index of the value to get (0..vm-1), -1 for all components
         *  @return status, EC_Normal if successful, an error code otherwise
         */
        OFCondition getPrivateDataElementKeyword(OFString &value, const signed long pos = 0) const;

        /** get PrivateDataElementName (0008,030c)
         *  @param  value  reference to variable in which the value should be stored
         *  @param  pos    index of the value to get (0..vm-1), -1 for all components
         *  @return status, EC_Normal if successful, an error code otherwise
         */
        OFCondition getPrivateDataElementName(OFString &value, const signed long pos = 0) const;

        /** get PrivateDataElementNumberOfItems (0008,030b)
         *  @param  value  reference to variable in which the value should be stored
         *  @param  pos    index of the value to get (0..vm-1)
         *  @return status, EC_Normal if successful, an error code otherwise
         */
        OFCondition getPrivateDataElementNumberOfItems(Uint32 &value, const unsigned long pos = 0) const;

        /** get PrivateDataElementValueMultiplicity (0008,0309)
         *  @param  value  reference to variable in which the value should be stored
         *  @param  pos    index of the value to get (0..vm-1)
         *  @return status, EC_Normal if successful, an error code otherwise
         */
        OFCondition getPrivateDataElementValueMultiplicity(Uint32 &value, const unsigned long pos = 0) const;

        /** get PrivateDataElementValueRepresentation (0008,030a)
         *  @param  value  reference to variable in which the value should be stored
         *  @param  pos    index of the value to get (0..vm-1), -1 for all components
         *  @return status, EC_Normal if successful, an error code otherwise
         */
        OFCondition getPrivateDataElementValueRepresentation(OFString &value, const signed long pos = 0) const;

        /** get RetrieveURI (0040,e010)
         *  @param  value  reference to variable in which the value should be stored
         *  @param  pos    index of the value to get (0..vm-1), -1 for all components
         *  @return status, EC_Normal if successful, an error code otherwise
         */
        OFCondition getRetrieveURI(OFString &value, const signed long pos = 0) const;

      // --- set DICOM attribute values ---

        /** set PrivateDataElement (0008,0308)
         *  @param  value  value to be set (should be valid for this VR)
         *  @param  pos    index of the value to be set (0..vm-1), vm=1
         *  @return status, EC_Normal if successful, an error code otherwise
         */
        OFCondition setPrivateDataElement(const Uint16 value, const unsigned long pos = 0);

        /** set PrivateDataElementDescription (0008,030e)
         *  @param  value  value to be set (single value only) or "" for no value
         *  @param  check  check 'value' for conformance with VR (UT) and VM (1) if enabled
         *  @return status, EC_Normal if successful, an error code otherwise
         */
        OFCondition setPrivateDataElementDescription(const OFString &value, const OFBool check = OFTrue);

        /** set PrivateDataElementEncoding (0008,030f)
         *  @param  value  value to be set (single value only) or "" for no value
         *  @param  check  check 'value' for conformance with VR (UT) and VM (1) if enabled
         *  @return status, EC_Normal if successful, an error code otherwise
         */
        OFCondition setPrivateDataElementEncoding(const OFString &value, const OFBool check = OFTrue);

        /** set PrivateDataElementKeyword (0008,030d)
         *  @param  value  value to be set (single value only) or "" for no value
         *  @param  check  check 'value' for conformance with VR (UC) and VM (1) if enabled
         *  @return status, EC_Normal if successful, an error code otherwise
         */
        OFCondition setPrivateDataElementKeyword(const OFString &value, const OFBool check = OFTrue);

        /** set PrivateDataElementName (0008,030c)
         *  @param  value  value to be set (single value only) or "" for no value
         *  @param  check  check 'value' for conformance with VR (UC) and VM (1) if enabled
         *  @return status, EC_Normal if successful, an error code otherwise
         */
        OFCondition setPrivateDataElementName(const OFString &value, const OFBool check = OFTrue);

        /** set PrivateDataElementNumberOfItems (0008,030b)
         *  @param  value  value to be set (should be valid for this VR)
         *  @param  pos    index of the value to be set (0..vm-1), vm=1-2
         *  @return status, EC_Normal if successful, an error code otherwise
         */
        OFCondition setPrivateDataElementNumberOfItems(const Uint32 value, const unsigned long pos = 0);

        /** set PrivateDataElementValueMultiplicity (0008,0309)
         *  @param  value  value to be set (should be valid for this VR)
         *  @param  pos    index of the value to be set (0..vm-1), vm=1-3
         *  @return status, EC_Normal if successful, an error code otherwise
         */
        OFCondition setPrivateDataElementValueMultiplicity(const Uint32 value, const unsigned long pos = 0);

        /** set PrivateDataElementValueRepresentation (0008,030a)
         *  @param  value  value to be set (single value only) or "" for no value
         *  @param  check  check 'value' for conformance with VR (CS) and VM (1) if enabled
         *  @return status, EC_Normal if successful, an error code otherwise
         */
        OFCondition setPrivateDataElementValueRepresentation(const OFString &value, const OFBool check = OFTrue);

        /** set RetrieveURI (0040,e010)
         *  @param  value  value to be set (single value only) or "" for no value
         *  @param  check  check 'value' for conformance with VR (UR) and VM (1) if enabled
         *  @return status, EC_Normal if successful, an error code otherwise
         */
        OFCondition setRetrieveURI(const OFString &value, const OFBool check = OFTrue);

      private:

        /// internal flag used to mark the empty default item
        /*const*/ OFBool EmptyDefaultItem;

        /// PrivateDataElement (0008,0308) vr=US, vm=1, type=1
        DcmUnsignedShort PrivateDataElement;
        /// PrivateDataElementDescription (0008,030e) vr=UT, vm=1, type=3
        DcmUnlimitedText PrivateDataElementDescription;
        /// PrivateDataElementEncoding (0008,030f) vr=UT, vm=1, type=3
        DcmUnlimitedText PrivateDataElementEncoding;
        /// PrivateDataElementKeyword (0008,030d) vr=UC, vm=1, type=1
        DcmUnlimitedCharacters PrivateDataElementKeyword;
        /// PrivateDataElementName (0008,030c) vr=UC, vm=1, type=1
        DcmUnlimitedCharacters PrivateDataElementName;
        /// PrivateDataElementNumberOfItems (0008,030b) vr=UL, vm=1-2, type=1C
        DcmUnsignedLong PrivateDataElementNumberOfItems;
        /// PrivateDataElementValueMultiplicity (0008,0309) vr=UL, vm=1-3, type=1
        DcmUnsignedLong PrivateDataElementValueMultiplicity;
        /// PrivateDataElementValueRepresentation (0008,030a) vr=CS, vm=1, type=1
        DcmCodeString PrivateDataElementValueRepresentation;
        /// RetrieveURI (0040,e010) vr=UR, vm=1, type=3
        DcmUniversalResourceIdentifierOrLocator RetrieveURI;

    };

  // --- constructors, destructor and operators ---

    /** (default) constructor
     *  @param emptyDefaultSequence internal flag used to mark the empty default sequence
     */
    DRTPrivateDataElementDefinitionSequence(const OFBool emptyDefaultSequence = OFFalse);

    /** copy constructor
     *  @param copy sequence object to be copied
     */
    DRTPrivateDataElementDefinitionSequence(const DRTPrivateDataElementDefinitionSequence &copy);

    /** destructor
     */
    virtual ~DRTPrivateDataElementDefinitionSequence();

    /** assigment operator
     *  @param copy sequence object to be copied
     */
    DRTPrivateDataElementDefinitionSequence &operator=(const DRTPrivateDataElementDefinitionSequence &copy);

  // --- general methods ---

    /** clear all internal member variables
     */
    void clear();

    /** check if sequence is empty
     *  @return OFTrue if sequence is empty, OFFalse otherwise
     */
    OFBool isEmpty();

    /** check if sequence is valid, i.e.\ not the empty default sequence
     *  @return OFTrue if sequence is valid, OFFalse otherwise
     */
    OFBool isValid() const;

    /** get number of items in the sequence
     *  @return number of items
     */
    unsigned long getNumberOfItems() const;

    /** goto first item in the sequence
     *  @return status, EC_Normal if successful, an error code otherwise
     */
    OFCondition gotoFirstItem();

    /** goto next item in the sequence
     *  @return status, EC_Normal if successful, an error code otherwise
     */
    OFCondition gotoNextItem();

    /** goto particular item in the sequence
     *  @param  num  number of the item to be selected (0..num-1)
     *  @return status, EC_Normal if successful, an error code otherwise
     */
    OFCondition gotoItem(const unsigned long num);

    /** get current item in the sequence
     *  @param  item  reference to item pointer (result variable)
     *  @return status, EC_Normal if successful, an error code otherwise
     */
    OFCondition getCurrentItem(Item *&item) const;

    /** get current item in the sequence
     *  @return reference to specified item if successful, empty default item otherwise
     */
    Item &getCurrentItem();

    /** get current item in the sequence
     *  @return const reference to specified item if successful, empty default item otherwise
     */
    const Item &getCurrentItem() const;

    /** get particular item in the sequence
     *  @param  num   number of the item to be retrieved (0..num-1)
     *  @param  item  reference to item pointer (result variable)
     *  @return status, EC_Normal if successful, an error code otherwise
     */
    OFCondition getItem(const unsigned long num, Item *&item);

    /** get particular item in the sequence
     *  @param  num  number of the item to be retrieved (0..num-1)
     *  @return reference to specified item if successful, empty default item otherwise
     */
    Item &getItem(const unsigned long num);

    /** get particular item in the sequence
     *  @param  num  number of the item to be retrieved (0..num-1)
     *  @return const reference to specified item if successful, empty default item otherwise
     */
    const Item &getItem(const unsigned long num) const;

    /** get particular item in the sequence
     *  @param  num  number of the item to be retrieved (0..num-1)
     *  @return reference to specified item if successful, empty default item otherwise
     */
    Item &operator[](const unsigned long num);

    /** get particular item in the sequence
     *  @param  num  number of the item to be retrieved (0..num-1)
     *  @return const reference to specified item if successful, empty default item otherwise
     */
    const Item &operator[](const unsigned long num) const;

    /** add new item to the end of this sequence
     *  @param  item  reference to new item pointer (result variable)
     *  @return status, EC_Normal if successful, an error code otherwise
     */
    OFCondition addItem(Item *&item);

    /** insert new item into the sequence
     *  @param  pos   position where the new item is to be inserted (0..num)
     *  @param  item  reference to new item pointer (result variable)
     *  @return status, EC_Normal if successful, an error code otherwise
     */
    OFCondition insertItem(const unsigned long pos, Item *&item);

    /** remove particular item from the sequence
     *  @param  pos  position of the item to be removed (0..num-1)
     *  @return status, EC_Normal if successful, an error code otherwise
     */
    OFCondition removeItem(const unsigned long pos);

  // --- input/output methods ---

    /** read sequence of items from dataset
     *  @param  dataset     reference to DICOM dataset from which the sequence should be read
     *  @param  card        cardinality (valid range for number of items)
     *  @param  type        value type (valid value: "1", "1C", "2" or something else which is not checked)
     *  @param  moduleName  optional module/sequence name to be printed (default: "RT object" if NULL)
     *  @return status, EC_Normal if successful, an error code otherwise
     */
    OFCondition read(DcmItem &dataset,
                     const OFString &card,
                     const OFString &type,
                     const char *moduleName = NULL);

    /** write sequence of items to dataset
     *  @param  dataset     reference to DICOM dataset to which the sequence should be written
     *  @param  card        cardinality (valid range for number of items)
     *  @param  type        value type (valid value: "1", "2" or something else which is not checked)
     *  @param  moduleName  optional module/sequence name to be printed (default: "RT object" if NULL)
     *  @return status, EC_Normal if successful, an error code otherwise
     */
    OFCondition write(DcmItem &dataset,
                      const OFString &card,
                      const OFString &type,
                      const char *moduleName = NULL);

  protected:

    /** goto particular item in the sequence
     *  @param  num       number of the item to be selected (0..num-1)
     *  @param  iterator  list iterator storing the position of the item
     *  @return status, EC_Normal if successful, an error code otherwise
     */
    OFCondition gotoItem(const unsigned long num,
                         OFListIterator(Item *) &iterator);

    /** goto particular item in the sequence
     *  @param  num       number of the item to be selected (0..num-1)
     *  @param  iterator  list iterator storing the position of the item
     *  @return status, EC_Normal if successful, an error code otherwise
     */
    OFCondition gotoItem(const unsigned long num,
                         OFListConstIterator(Item *) &iterator) const;

  private:

    /// internal flag used to mark the empty default sequence
    /*const*/ OFBool EmptyDefaultSequence;

    /// list of items in this sequence
    OFList<Item *>         SequenceOfItems;
    /// currently selected item
    OFListIterator(Item *) CurrentItem;
    /// empty default item
    Item                   EmptyItem;

};


#endif
